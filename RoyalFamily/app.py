from flask import Flask
import subprocess

app = Flask(__name__)


@app.route('/is-monarca')
def is_monarca():  # put application's code here
    return 'Hello World!'

@app.route('/is-only-child')
def is_only_child():
    return 'Hello World!'

@app.route('/has_been_or_is_king')
def has_been_or_is_king():
    return 'Hello World!'

@app.route('/has_been_or_is_queen')
def has_been_or_is_queen():
    return 'Hello World!'

if __name__ == '__main__':
    app.run(debug=True, port=5000)
